# RPG
My first RPG (text based)

The world is represented by a linked list of nine Location nodes, with each node having pointers to four additional Locations. These are linked together (North, East, South, West) to form a grid as shown below. Each X represents a different location whereas the lines show how they are connected. 

Map of world:
   |    |    |
-- X -- X -- X --
   |    |    |
-- X -- X -- X --
   |    |    |
-- X -- X -- X --
   |    |    |

At each location, the player is given the option to explore, where they can uncover items for use in the game or enemies to combat. The enemies also have a chance of dropping items that the player can use. Gameplay ends when the player's health reaches Zero. 
