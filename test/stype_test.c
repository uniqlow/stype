#include <stype.h>
#include <stdio.h>
#include <inttypes.h>
#include <assert.h>

int
main(void)
{
	u8 const the_u8 = 1;
	s8 const the_s8 = -1;
	u16 const the_u16 = 256;
	s16 const the_s16 = -256;
	u32 const the_u32 = 65536;
	s32 const the_s32 = -65536;
	assert(sizeof the_u8 == 1 && "u8 != 1 byte");
	assert(sizeof the_s8 == 1 && "s8 != 1 byte");
	assert(sizeof the_u16 == 2 && "u16 != 2 bytes");
	assert(sizeof the_s16 == 2 && "s16 != 2 bytes");
	assert(sizeof the_u32 == 4 && "u32 != 4 bytes");
	assert(sizeof the_s32 == 4 && "s32 != 4 bytes");
	printf("u8: %u\ns8: %d\nu16: %u\ns16: %d\nu32: %u\ns32: %d\n",
			the_u8, the_s8, the_u16, the_s16, the_u32, the_s32);
#if !defined(__ILP32__) && !defined(_ILP32)
	u64 const the_u64 = 4294967296;
	s64 const the_s64 = -4294967296;
	assert(sizeof the_u64 == 8 && "u64 != 8 bytes");
	assert(sizeof the_s64 == 8 && "s64 != 8 bytes");
	printf("u64: %"PRIu64"\ns64: %"PRId64"\n", the_u64, the_s64);
#endif
	return 0;
}
