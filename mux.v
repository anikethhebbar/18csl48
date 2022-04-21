module mux(d, s, y);
input [7:0]d;
input[2:0]s;
output y;
reg y;
always @(d,s)
begin
case(s)
3'b000:y=d[0];
3'b001:y=d[0];
3'b010:y=d[0];
3'b011:y=d[0];
3'b100:y=d[0];
3'b101:y=d[0];
3'b110:y=d[0];
3'b111:y=d[0];
endcase
end
endmodule