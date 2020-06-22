FUNC @foo:
	arg a, b, c
_begIf_1:
	push #0
	cmpeq
	jz _elseIf_1
	push #2
	add
	pop a
	jmp _endIf_1
_elseIf_1:
	push #1
	sub
_endIf_1:
	push #2
	add
	ret ~
ENDFUNC

FUNC @main:
	var b
	var a
	var d
	push #2
	push #3
	push #4
	mul
	add
	push #6
	push #2
	div
	sub
	pop d
	pop b
	push #2
	add
	pop a
	push #1
	not
	push #2
	add
	push #2
	div
	push #1.000000
	cmpge
	and
	cmpeq
ENDFUNC

