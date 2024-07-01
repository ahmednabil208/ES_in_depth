ENTRY(reset)

MEMORY
{
    MEM (rwx) : ORIGIN = 0x00000000, LENGTH = 64M
}

SECTIONS
{
    . = 0x10000;

    .startup . :
    {
        startup.o(.text)
    }> MEM 

    .text :
    {
        *(.text)
        *(.rodata)
    }> MEM

    .data :
    {
        *(.data)
    }> MEM AT > MEM

    .bss :
    {
        *(.bss)
        *(COMMON)
    }> MEM

    . = ALIGN(4);
    _end = .;  /* Define a symbol for the end of the data segment */
    PROVIDE (end = .);  /* Define a global symbol for the end of the data segment */

    . = . + 0x1000;
    stack_top = .;
}
