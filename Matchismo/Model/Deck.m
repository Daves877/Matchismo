//
//  Deck.m
//  Matchismo
//
//  Created by Dave Mattice on 1/31/13.
//  Copyright (c) 2013 Dave Mattice.
//  All rights reserved.
//

#import "Deck.h"

@interface Deck()
@property (strong, nonatomic) NSMutableArray *Cards;
@end

@implementation Deck

- (NSMutableArray *)cards

{
    if (!_Cards) _Cards = [[NSMutableArray alloc] init ] ;
    return  _Cards;
}

- (void)addCard:(Card *)card atTop:(BOOL)atTop
{
    if (atTop) {
        [self.Cards insertObject:card atIndex:0];
    }   else  {
        [self.Cards addObject:card];
    }
}

- (Card *)drawRandomCard

{
    Card *randomCard = nil;
    
    if (self.Cards.count) {
        unsigned index = arc4random() % self.Cards.count;
        randomCard = self.Cards[index];
        [self.Cards removeObjectAtIndex:index];
        
    }
    return randomCard;
}

@end
    
    
    
    
