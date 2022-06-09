//Exo 4

// A processor has a 32-bit memory address space (i.e. 32-bit addresses). The memory is divided
// into blocks of 32 bytes each. The cache size is 16K bytes.

// a.) The cache is broken into how many blocs?

// 2^4 * 2^10 / 2^5  = 2^9 blocks

// b.) Assuming the cache uses direct-mapping, how many bits are needed for each of the
// TAG, BLOCK, and BYTE OFFSET?

//offset = 5
//index = 9 because we have 2^9 blocks
//tag = 32-9-5 = 18 bits

// c.) Assuming the cache uses a 4-way set-associative mapping, how many bits are needed
// for each of the TAG, BLOCK, and BYTE OFFSET?

//offset = 5 same as Direct Mapping
//index = 7
//tag = 32-5-7 = 20



// A processor has a 36-bit memory address space (i.e. 36-bit addresses). The memory is divided
// into blocks of 64 bytes. The cache size is 1 Megabyte.

// a.) The cache is broken into how many blocs?

// 2^20 / 2^6 = 2^14

// b.) Assuming the cache uses direct-mapping, how many bits are needed for each of the
// TAG, BLOCK, and BYTE OFFSET ?

//offset = 6 bits
//index = 14 bits
//tag =  36-6-14 = 16 bits

// c.) Assuming the cache uses a 8-way set-associative mapping, how many bits are needed
// for each of the TAG, BLOCK, and BYTE OFFSET ?

//offset = 6 bits same are Direct Mapping

// compute number of sets
// size of cache = 2^14 blocks
// number of blocks in set = 2^8
// sets = 2^14/2^3 = 2^11
// index = 11

//tag = 36-6-11 = 19 bits
