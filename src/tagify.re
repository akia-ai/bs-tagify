type t;

[@bs.module] external tagify: t = "tagify";

let make = () => tagify;

[@bs.send.pipe: array(string)] external addTags: array(string) => t = "addTags";
