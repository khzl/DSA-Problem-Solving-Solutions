"use strict";
function greetUser(user) {
    return `Hello , ${user.username}! Your ID Is ${user.id}.`;
}
const newUser = {
    id: 101,
    username: "TypeScriptDev"
};
console.log(greetUser(newUser));
const scores = [85, 92, 78];
console.log("Scores recorded: ", scores.length);
