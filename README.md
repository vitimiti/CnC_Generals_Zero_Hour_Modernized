# Command And Conquer Generals And Zer Hour (Modernized)

This is a modernization effort and cross-platform port effort of the original code from C&C Generals and Zero hour.

## Aims

This project aims to:

- Use a modern, cross-platform build system with CMake
- Make the game with its original assets run on at least Windows and Linux (hopefully macOS as well)
- Modernize the code to use modern C++ features
- Create a launcher to run either game, like in modern online store solutions by EA
- Update the launcher so that it may run mods or games based on either engine
- In the long term, remove bugs, even if it breaks backwards compatibility with the old game in online play
- Remove external dependencies to proprietary libraries and use instead FOSS, cross-platform libraries

This project does **not** aim to:

- Be compatible for online play with the original game and engine (but it won't actively try to break this
  compatibility)
- Run the original game without the legally purchased game assets