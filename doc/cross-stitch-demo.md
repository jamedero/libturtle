# Cross stitching demo
This demo takes you through how to use the Turtle's cross stitching function. Cross stitching is the process of making an image out of many small x shaped stitches. Example: https://www.needlework-tips-and-techniques.com/images/homemade-valentines-cards.jpg
## Step 1. Find a pattern you like
Go on line and find a cross stitch pattern you like, or create your own on graph paper! You should have a couple colors in mind, and know at what coordinate you would like each of those colors to be filled in. 
## Step 2. Convert this to a vector of coordinates
Make a different vector of coordinates for each color that you have, placing them in the same C file. It should be a vector of pairs, as shown in the cross-stitch-demo.cpp file in the demo folder.
## Step 3. Add alignment-helper coordinates
Add the pair {0,0} to each of your vectors. The reason we do this is so, when we embroider each layer, we can align them against your embroidery piece at the {0,0} point. Otherwise, it is impossible to tell at what part on the fabric we should be embroidering the next layer. (You can also use an arbitrarily large point, like {20,20}).
## Step 4. Embroidery!
Pass your vector into the Turtle's provided function as shown in cross-stitch-demo.cpp. Compile and run, and your file should be generated! Do this as many times as you need, and upload your DST files onto the machine and embroider them separately. 