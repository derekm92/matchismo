//
//  Deck.h
//  Matchismo
//
//  Created by Derek Miller on 8/8/14.
//  Copyright (c) 2014 Derek Miller. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
