const fs = require("fs");

const readFile = (day, prog) => {
    if (day > 12) {
        console.log("Done!");
        return;
    } else {
        fs.readFile(`${day}_${prog}.c`, "utf-8", (err, data) => {
            if (err) {
                // console.error(err, "here");
                readFile(day + 1, prog + 1);
                return;
            } else {
                console.log(`${day}_${prog}.c read successfully`);
                fs.appendFile("home.txt", `${day}.${prog}\n` + data + "\n", () => {
                    console.log(`${day}_${prog}.c written successfully`);
                    readFile(day, prog + 1);
                });
            }
        });
    }
};

readFile(12, 2);