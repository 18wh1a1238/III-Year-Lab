s = Hash.new 0
s['English'] = 77
s['Social'] = 79
s['Math'] = 91
total_marks = 0
s.each {|key,value|
              total_marks +=value
        } 
puts "Total Marks: "+total_marks.to_s