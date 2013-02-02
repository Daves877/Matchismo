//
//  Card.h
//  Matchismo
//
//  Created by Dave Mattice on 1/30/13.
//  Copyright (c) 2013 Dave Mattice. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject


@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isFaceUp) BOOL faceUp;
@property (nonatomic, getter=isUnPlayable) BOOL unplayable;

- (int)match:(NSArray *)otherCards;

@end
