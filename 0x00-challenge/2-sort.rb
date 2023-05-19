###
#
#  Sort integer arguments (ascending)
#
###

sorted_result = []
ARGV.each do |argument|
    # Skip if not an integer
    next if argument !~ /^-?[0-9]+$/

    # Convert to an integer
    int_argument = argument.to_i

    # Insert the result at the right position
    is_inserted = false
    index = 0
    array_size = sorted_result.size
    while !is_inserted && index < array_size do
        if sorted_result[index] < int_argument
            index += 1
        else
            sorted_result.insert(index, int_argument)
            is_inserted = true
            break
        end
    end
    sorted_result << int_argument if !is_inserted
end

puts sorted_result
