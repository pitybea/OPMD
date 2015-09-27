# OPMD (optimizers, parameters, models, and datasets)
an idea for distributed machine learning 

A large family of machine learning methods can be considered as using an Optimizer to find best Parameters of a Model according to some Data, such as logistic regression, factorization machine, and neural networks. 

This project can be considered as a "virtual" thing. At the current stage we do not have a very clear goal. However, here are a few things we want to acheive when the project is finished.

Given the same dataset, different models can be trained using the same optimizer or different optimizers. These optimizers includes but not limited to ftrl, lbfgs, and ogd optimizers.


If some one develop a new model belongs to a certain family of machine learning methods, he or she just need to well define the error fucntion and gradient function, the new model can be easily optimized using the developed optimizers, and then tested on a family of well prepared datasets.



