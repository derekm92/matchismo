//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Derek Miller on 8/12/14.
//  Copyright (c) 2014 Derek Miller. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

//designated initializer
- (instancetype)initWithCardCount:(NSInteger)count
                        usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSInteger)index;
- (Card *)cardAtIndex:(NSInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end