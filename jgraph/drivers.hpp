#ifndef DRIVERS_H
#define DRIVERS_H

#include "jgraph.hpp"
#include "gradientfield.hpp"
#include <set>

// Repeatedly update and handle key events
void mainLoop(BarGraph *g);
void mainLoop(BarGraph *g, void (*update)(BarGraph *graph, set<int> &pressedKeys));

void mainLoop(DotGraph *g);
void mainLoop(DotGraph *g, void (*update)(DotGraph *graph, set<int> &pressedKeys));

void mainLoop(LineGraph *g);
void mainLoop(LineGraph *g, void (*update)(LineGraph *graph, set<int> &pressedKeys));

void mainLoop(SlopeField *g);
void mainLoop(SlopeField *g, void (*update)(SlopeField *graph, set<int> &pressedKeys));

void mainLoop(GradientField *g);
void mainLoop(GradientField *g, void (*update)(GradientField *graph, set<int> &pressedKeys));

#endif
