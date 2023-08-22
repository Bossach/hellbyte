#include <stdio.h>
#include <stdlib.h>

int main(){

	uint8_t * ptr = (uint8_t *)calloc(sizeof(uint32_t), sizeof(uint32_t));

	*ptr = sizeof(uint32_t) << sizeof(uint32_t) | (sizeof(uint32_t) + sizeof(uint32_t));

	*++ptr = ~( (sizeof(uint64_t) << sizeof(uint8_t)) | sizeof(uint64_t) | sizeof(uint16_t));

	*++ptr = *++ptr = (sizeof(uint32_t) | sizeof(uint64_t)) * (sizeof(uint64_t) + sizeof(uint8_t) );

	*++ptr = ~sizeof(uint8_t) | sizeof(uint8_t);
	
	*(ptr + sizeof(uint16_t)) = ~*ptr | (sizeof(uint64_t) << sizeof(uint16_t));
	
	*(ptr + sizeof(uint32_t)) 
	= *(ptr + sizeof(uint32_t) + sizeof(uint16_t)) 
	= *ptr;

	*++ptr = sizeof(uint64_t) + sizeof(uint16_t) + sizeof(uint8_t) << sizeof(uint16_t);

	++ptr;
	*++ptr = ~sizeof(uint64_t);

	++ptr;
	*++ptr = ~(sizeof(uint64_t) | sizeof(uint32_t) | sizeof(uint8_t));

	*++ptr = *(ptr - sizeof(uint64_t));

	*++ptr = sizeof(uint32_t) | (sizeof(uint32_t) | sizeof(uint16_t)) << sizeof(uint32_t);

	*++ptr = sizeof(uint64_t) << sizeof(uint16_t) | sizeof(uint8_t);

	*++ptr = sizeof(uint16_t) << sizeof(uint16_t) | sizeof(uint16_t);

	*++ptr = (sizeof(uint64_t) | sizeof(uint8_t)) << sizeof(uint32_t);

	*(ptr + sizeof(uint8_t)) = sizeof(uint64_t) << sizeof(uint32_t);

	*((uint16_t *)ptr - sizeof(uint8_t) - sizeof(uint16_t)) &= ~*(uint16_t *)ptr;
	*((uint16_t *)ptr - sizeof(uint32_t)) &= ~*(uint16_t *)ptr;
	*((uint16_t *)ptr - sizeof(uint8_t) - sizeof(uint32_t)) &= ~*(uint16_t *)ptr;
	*((uint16_t *)ptr - sizeof(uint8_t) - sizeof(uint16_t) - sizeof(uint32_t)) &= ~*(uint16_t *)ptr;

	*ptr <<= sizeof(uint64_t);

	ptr = ptr + sizeof(uint16_t);
	ptr = (uint8_t *)((uint32_t *)ptr - sizeof(uint32_t));

	
	printf("%s", ptr);
	
	
	return sizeof(uint8_t)>>sizeof(uint8_t);
}