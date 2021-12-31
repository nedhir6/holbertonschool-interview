#!/usr/bin/node
const request = require('request');
const movieID = process.argv[2];
const names = {};
const url = 'https://swapi-api.hbtn.io/api/films/' + movieID;
request(url, function (erro, response, body) {
  const res = JSON.parse(body).characters;
  for (const i of res) {
    request(i, function (erro, response, body) {
      names[i] = JSON.parse(body).name;
      if (Object.values(names).length === res.length) {
        for (const j of res) {
          console.log(names[j]);
        }
      }
    });
  }
});
