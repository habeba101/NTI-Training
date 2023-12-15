#ifndef bit_manipulation
#define bit_manipulation .h
#define SET_BIT(REG, BIT_NUMBER)  (REG) | (1 << (BIT_NUMBER))
#define CLEAR_BIT(REG, BIT_NUMBER)  (REG) & (~1 << (BIT_NUMBER))
#define TOGGLE_BIT(REG, BIT_NUMBER) ( (REG) ^ (1 << (BIT_NUMBER)))
#define SHIFT_LEFT(REG, BIT_NUMBER) ( (REG) << (BIT_NUMBER))
#define SHIFT_RIGHT(REG, BIT_NUMBER) ( (REG) >> (BIT_NUMBER))

#endif
