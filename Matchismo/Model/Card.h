//
//  Card.h
//  Matchismo
//
//  Created by Derek Miller on 8/8/14.
//  Copyright (c) 2014 Derek Miller. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
