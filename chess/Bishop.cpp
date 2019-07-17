//
//  Bishop.cpp
//  chess
//
//  Created by Sebastian Knell on 7/16/19.
//  Copyright © 2019 Sebastian Knell. All rights reserved.
//

#include "Bishop.hpp"

Bishop::Bishop(int x, int y):Object() {
	name = 'B';
	setPosX(x);
	setPosY(y);
}

bool Bishop::canMove(int x, int y) {
	return true;
}