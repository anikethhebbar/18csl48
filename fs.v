module fs(x,y,z,b,d);
input x,y,z;
output b,d;
assign d=x^y^z;
assign b = (~x&y) | (~y&z) | (x&z);
endmodule
