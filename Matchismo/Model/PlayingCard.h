//
//  PlayingCard.h
//  Matchismo
//
//  Created by Dave Mattice on 1/31/13.
//  Copyright (c) 2013 Dave Mattice. All rights reserved.
//

#import "Card.h"
@interface PlayingCard : NSObject


@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
