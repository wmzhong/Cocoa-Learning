//
//  Person.h
//  RaiseManChallenge
//
//  Created by Wunmin on 15/6/4.
//  Copyright (c) 2015年 Wunmin Chung. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject {
    NSString *personName;
    float expectedRaise;
}

@property (readwrite, copy) NSString *personName;
@property (readwrite) float expectedRaise;

@end
