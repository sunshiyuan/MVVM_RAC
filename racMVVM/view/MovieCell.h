//
//  MovieCell.h
//  racMVVM
//
//  Created by ljkj on 2018/5/9.
//  Copyright © 2018年 ljkj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovieModel.h"

@interface MovieCell : UICollectionViewCell

@property (nonatomic, strong) MovieModel *movieModel;

+ (NSString *)cellReuseIdentifier;

@end
