dataset = STDIN.read.split("\n").map do |data|
    data.split(" ")
end.map do |data|
  data.map(&:to_i)
end

dataset.each do |data|
    puts  (data[0] + data[1]).to_s.size
end