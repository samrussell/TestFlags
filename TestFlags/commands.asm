.386

_TEXT SEGMENT

PUBLIC @addflags@8
PUBLIC @subflags@8
PUBLIC @cmpflags@8
PUBLIC @testflags@8

@addflags@8 PROC
	add ecx, edx
	pushfd
	pop eax
	ret
@addflags@8 ENDP

@subflags@8 PROC
	sub ecx, edx
	pushfd
	pop eax
	ret
@subflags@8 ENDP

@cmpflags@8 PROC
	cmp ecx, edx
	pushfd
	pop eax
	ret
@cmpflags@8 ENDP

@testflags@8 PROC
	test ecx, edx
	pushfd
	pop eax
	ret
@testflags@8 ENDP

_TEXT ENDS

END