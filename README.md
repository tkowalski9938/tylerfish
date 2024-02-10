# TylerFish
 
A chess engine that will (eventually) use MCTS, aided with a NN for policy and board evaluation. This will be done in **C++** and accelerated with **CUDA**. Not sure yet whether tree search will be parallelized on GPU such as [Zeta](https://www.chessprogramming.org/Zeta) or traditionally with multiple CPU threads such as in this [paper](https://webdocs.cs.ualberta.ca/~mmueller/ps/enzenberger-mueller-acg12.pdf).

Please let me know if you have any suggestions. 👍

# Table of Contents
1. [Currently Doing](#current)
2. [Work done](#done)
3. [Bit Board Representation](#bitboard)

### Currently doing: <a name="current"></a>
- Have game logic implemented with bitboards
- Researching bitboards and reverse-engineering Leela Chess Zero

### Work done: <a name="done"></a>
- Basic interpreter for UCI protocol

### Bitboard Planning: <a name="bitboard"></a>
- Board is always interpreted "from white"
- 5 bitboards: myPieces, opponentPieces, rooks&queens, bishops&queens, and pawns. Every individual bitboard representing a certain type of piece can be derived from set operations from these 5. The idea behind the most dense possible representation is to reduce NN input cost. If we did not plan to use a neural network, not needing operations to derive individual bitboards in move generation may justify the extra memory to store each constituent board.
