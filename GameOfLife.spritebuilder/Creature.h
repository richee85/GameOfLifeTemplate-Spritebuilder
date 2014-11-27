//
//  Creature.h
//  GameOfLife
//
//  Created by RyU on 27/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite
//creature current state
@property(nonatomic,assign) BOOL isAlive;
//amount of living neighbors
@property(nonatomic,assign) NSInteger livingNeighbors;

-(id)initCreature;

@end
