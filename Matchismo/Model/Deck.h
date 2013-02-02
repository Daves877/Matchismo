//
//  Deck.h
//  Matchismo
//
//  Created by Dave Mattice on 1/31/13.
//  Copyright (c) 2013 Dave Mattice. All rights reserved.
//

#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL) atTop;

- (Card *)drawRandomCard;

@end
