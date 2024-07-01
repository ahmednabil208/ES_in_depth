/*
	Ahmed Nabil Sabbah
*/
.global reset
reset:
   ldr SP, = stack_top
   bl main
stop: b stop