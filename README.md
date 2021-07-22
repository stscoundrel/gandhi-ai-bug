# Gandhi AI bug

Demonstration of "Nuclear Gandhi" bug in C, C++ and Rust.

Nuclear Gandhi Bug is an urban legend from Civilizations game series. Supposedly, aggression of AI players was a value between 1 - 10 (or 1 - 12). Gandhi had the lowest value, 1, which should have made him peaceful. But once Gandhi gains "democracy" modifier of -2 to aggression, his final aggression ends up being -1. As the aggression was supposedly stored in an unsigned 8bit integer, this leads to integer overflow with value of 255. So Gandhi's aggression was supposedly 255 in scale of 1 - 10, making him quite trigger happy with nuclear bombs.

This urban legend has since been debunked by developers of original Civilizations games. Even if it is an urban legend, it is still one of the best known known examples of integer overflow.

## The test

- 8bit unsiged integer as Gandhi's "aggression"
- Adds value of "-2" to original value
- If value is unsigned 8bit integer, the final result should be 255 instead of -1.

## To run

Three versions to run:
- `yarn run:c`
- `yarn run:c++`
- `yarn run:rust`
