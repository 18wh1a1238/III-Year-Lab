student = {
    "tel" => 65,
    "eng" => 99
}
#puts student["eng"]
sum=0
student.each { |key,value| 
  sum+=value
}
puts "total:"+sum.to_s