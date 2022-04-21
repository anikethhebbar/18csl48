module fs(x,y,z,b,d);
input x,y,z;
output b,d;
assign s=x^y^z;
assign c = (~x&y) | (~y&z) | (x&z);
endmodule
