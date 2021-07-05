def check(a, b)
    return (a > 100 && b < 0) || (a < 0 && b > 100)
end
    
puts check(-78, 100)