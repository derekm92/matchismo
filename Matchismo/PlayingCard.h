//
//  PlayingCard.h
//  Matchismo
//
//  Created by Derek Miller on 8/11/14.
//  Copyright (c) 2014 Derek Miller. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
