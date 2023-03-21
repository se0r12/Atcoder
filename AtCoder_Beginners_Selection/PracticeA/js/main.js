const fs = require("fs");

function main(param){
    const input = param.split("\n");

    const a = (input[0]);
    const [b, c] = input[1].split(" ");
    const s = input[2];

    const result = Number(a) + Number(b) + Number(c);
    console.log(`${result} ${s}`);
}
main(fs.readFileSync("/dev/stdin", {encoding: "utf-8"}));
