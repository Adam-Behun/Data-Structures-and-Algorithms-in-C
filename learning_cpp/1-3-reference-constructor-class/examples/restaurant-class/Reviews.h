#ifndef REVIEWS_H
#define REVIEWS_H

#include "Review.h"
#include <vector>

class Reviews {
public:
  void InputReviews();
  void PrintCommentsForRating(int currRating) const;
  int GetAverageRating() const;

private:
  std::vector<Review> reviewList;
};

#endif