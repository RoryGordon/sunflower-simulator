/*
	Copyright (c) 1999-2008, Phillip Stanley-Marbell (author)
 
	All rights reserved.

	Redistribution and use in source and binary forms, with or without 
	modification, are permitted provided that the following conditions
	are met:

	*	Redistributions of source code must retain the above
		copyright notice, this list of conditions and the following
		disclaimer.

	*	Redistributions in binary form must reproduce the above
		copyright notice, this list of conditions and the following
		disclaimer in the documentation and/or other materials
		provided with the distribution.

	*	Neither the name of the author nor the names of its
		contributors may be used to endorse or promote products
		derived from this software without specific prior written 
		permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
	"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
	LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
	FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
	COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
	INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
	BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
	CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
	LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN 
	ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
	POSSIBILITY OF SUCH DAMAGE.
*/

typedef struct
{
	unsigned	code:16;
} instr_0;

typedef struct
{
	unsigned 	code_lo:8;
	unsigned	dst:4;
	unsigned	code_hi:4;
} instr_n;

typedef struct
{
	unsigned 	code_lo:8;
	unsigned	src:4;
	unsigned	code_hi:4;
} instr_m;

typedef struct
{
	unsigned 	code_lo:4;
	unsigned	reg:3;
	unsigned   	fill:1;
	unsigned	src:4;
	unsigned	code_hi:4;
} instr_mbank;

typedef struct
{
	unsigned 	code_lo:4;
	unsigned	reg:3;
	unsigned   	fill:1;
	unsigned	dst:4;
	unsigned	code_hi:4;
} instr_nbank;

typedef struct
{
	unsigned 	code_lo:4;
	unsigned	src:4;
	unsigned	dst:4;
	unsigned	code_hi:4;
} instr_nm;

typedef struct
{
	unsigned	disp:4;
	unsigned	src:4;
	unsigned	code:8;
} instr_md;

typedef struct
{
	unsigned	disp:4;
	unsigned	src:4;
	unsigned	dst:4;
	unsigned 	code:4;
} instr_nmd;

typedef struct
{
	unsigned	disp:8;
	unsigned	code:8;
} instr_d8;

typedef struct
{
	unsigned	disp:12;
	unsigned	code:4;
} instr_d12;

typedef struct
{
	unsigned	disp:4;
	unsigned	dst:4;
	unsigned 	code:8;
} instr_nd4;

typedef struct
{
	unsigned	disp:8;
	unsigned	dst:4;
	unsigned	code:4;
} instr_nd8;

typedef struct
{
	unsigned	imm:8;
	unsigned	code:8;
} instr_i;

typedef struct
{
	unsigned	imm:8;
	unsigned	dst:4;
	unsigned	code:4;
} instr_ni;

typedef struct
{
	unsigned	nibble_1:4;
	unsigned	nibble_2:4;
	unsigned	nibble_3:4;
	unsigned	nibble_4:4;
} decode_instr;
