// read all '*.md" files from folder './data' and merge them into one file 'merged.md'
const fs = require("fs");
const async = require("async");
const path = require("path");

const dir = "./shortNotes";
const files = fs.readdirSync(dir);
const mergedFile = "all-in-one-note-merged.md";

async.eachSeries(
  files,
  (file, callback) => {
    const filePath = path.join(dir, file);
    const data = fs.readFileSync(filePath, "utf8");
    fs.appendFileSync(mergedFile, data);
    callback();
  },
  (err) => {
    if (err) {
      console.log(err);
    } else {
      console.log("done");
    }
  }
);
