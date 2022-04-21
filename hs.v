module Hs(x,y,b,d);
input x,y;
output b,d;
assign d=x^y;
assign b = ~x&y;
endmodule
