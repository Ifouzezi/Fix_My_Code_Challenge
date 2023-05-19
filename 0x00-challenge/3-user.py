"""
User Model
"""
import hashlib
import uuid


class User:
    """
    User class:
    - id: public string unique (uuid)
    - password: private string hash in MD5
    """

    __hashed_password = None

    def __init__(self):
        """
        Initialize a new user:
        - assigned a unique `id`
        """
        self.user_id = str(uuid.uuid4())

    @property
    def password(self):
        """
        Password getter
        """
        return self.__hashed_password

    @password.setter
    def password(self, pwd):
        """
        Password setter:
        - `None` if `pwd` is `None`
        - `None` if `pwd` is not a string
        - Hash `pwd` in MD5 before assigning it to `__hashed_password`
        """
        if pwd is None or not isinstance(pwd, str):
            self.__hashed_password = None
        else:
            self.__hashed_password = hashlib.md5(pwd.encode()).hexdigest().lower()

    def is_valid_password(self, pwd):
        """
        Valid password:
        - `False` if `pwd` is `None`
        - `False` if `pwd` is not a string
        - `False` if `__hashed_password` is `None`
        - Compare `__hashed_password` and the MD5 value of `pwd`
        """
        if pwd is None or not isinstance(pwd, str):
            return False
        if self.password is None:
            return False
        return hashlib.md5(pwd.encode()).hexdigest().lower() == self.password


if __name__ == '__main__':
    print("Test User")

    user1 = User()
    if user1.user_id is None:
        print("New User should have an id")

    user2 = User()
    if user1.user_id == user2.user_id:
        print("User.user_id should be unique")

    password = "myPassword"
    user1.password = password
    if user1.password == password:
        print("User.password should be hashed")

    if user2.password is not None:
        print("User.password should be None by default")

    user2.password = None
    if user2.password is not None:
        print("User.password should be None if set to None")

    user2.password = 89
    if user2.password is not None:
        print("User.password should be None if set to an integer")

    if not user1.is_valid_password(password):
        print("is_valid_password should return True if it's the right password")

    if user1.is_valid_password("Fakepwd"):
        print("is_valid_password should return False if it's not the right password")

    if user1.is_valid_password(None):
        print("is_valid_password should return False if compared with None")

    if user1.is_valid_password(89):
        print("is_valid_password should return False if compared with an integer")

    if user2.is_valid_password("No pwd"):
        print("is_valid_password should return False if no password is set before")
