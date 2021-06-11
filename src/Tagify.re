type t;

[@bs.new] external make: unit => t = "Tagify";

[@bs.send.pipe: array(string)] external addTags: array(string) => t = "addTags";
