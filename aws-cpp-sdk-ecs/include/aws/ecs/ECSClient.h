/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/CreateClusterResult.h>
#include <aws/ecs/model/CreateServiceResult.h>
#include <aws/ecs/model/DeleteClusterResult.h>
#include <aws/ecs/model/DeleteServiceResult.h>
#include <aws/ecs/model/DeregisterContainerInstanceResult.h>
#include <aws/ecs/model/DeregisterTaskDefinitionResult.h>
#include <aws/ecs/model/DescribeClustersResult.h>
#include <aws/ecs/model/DescribeContainerInstancesResult.h>
#include <aws/ecs/model/DescribeServicesResult.h>
#include <aws/ecs/model/DescribeTaskDefinitionResult.h>
#include <aws/ecs/model/DescribeTasksResult.h>
#include <aws/ecs/model/DiscoverPollEndpointResult.h>
#include <aws/ecs/model/ListClustersResult.h>
#include <aws/ecs/model/ListContainerInstancesResult.h>
#include <aws/ecs/model/ListServicesResult.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesResult.h>
#include <aws/ecs/model/ListTaskDefinitionsResult.h>
#include <aws/ecs/model/ListTasksResult.h>
#include <aws/ecs/model/RegisterContainerInstanceResult.h>
#include <aws/ecs/model/RegisterTaskDefinitionResult.h>
#include <aws/ecs/model/RunTaskResult.h>
#include <aws/ecs/model/StartTaskResult.h>
#include <aws/ecs/model/StopTaskResult.h>
#include <aws/ecs/model/SubmitContainerStateChangeResult.h>
#include <aws/ecs/model/SubmitTaskStateChangeResult.h>
#include <aws/ecs/model/UpdateContainerAgentResult.h>
#include <aws/ecs/model/UpdateServiceResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ECS
{

namespace Model
{
        class CreateClusterRequest;
        class CreateServiceRequest;
        class DeleteClusterRequest;
        class DeleteServiceRequest;
        class DeregisterContainerInstanceRequest;
        class DeregisterTaskDefinitionRequest;
        class DescribeClustersRequest;
        class DescribeContainerInstancesRequest;
        class DescribeServicesRequest;
        class DescribeTaskDefinitionRequest;
        class DescribeTasksRequest;
        class DiscoverPollEndpointRequest;
        class ListClustersRequest;
        class ListContainerInstancesRequest;
        class ListServicesRequest;
        class ListTaskDefinitionFamiliesRequest;
        class ListTaskDefinitionsRequest;
        class ListTasksRequest;
        class RegisterContainerInstanceRequest;
        class RegisterTaskDefinitionRequest;
        class RunTaskRequest;
        class StartTaskRequest;
        class StopTaskRequest;
        class SubmitContainerStateChangeRequest;
        class SubmitTaskStateChangeRequest;
        class UpdateContainerAgentRequest;
        class UpdateServiceRequest;

        typedef Utils::Outcome<CreateClusterResult, Client::AWSError<ECSErrors>> CreateClusterOutcome;
        typedef Utils::Outcome<CreateServiceResult, Client::AWSError<ECSErrors>> CreateServiceOutcome;
        typedef Utils::Outcome<DeleteClusterResult, Client::AWSError<ECSErrors>> DeleteClusterOutcome;
        typedef Utils::Outcome<DeleteServiceResult, Client::AWSError<ECSErrors>> DeleteServiceOutcome;
        typedef Utils::Outcome<DeregisterContainerInstanceResult, Client::AWSError<ECSErrors>> DeregisterContainerInstanceOutcome;
        typedef Utils::Outcome<DeregisterTaskDefinitionResult, Client::AWSError<ECSErrors>> DeregisterTaskDefinitionOutcome;
        typedef Utils::Outcome<DescribeClustersResult, Client::AWSError<ECSErrors>> DescribeClustersOutcome;
        typedef Utils::Outcome<DescribeContainerInstancesResult, Client::AWSError<ECSErrors>> DescribeContainerInstancesOutcome;
        typedef Utils::Outcome<DescribeServicesResult, Client::AWSError<ECSErrors>> DescribeServicesOutcome;
        typedef Utils::Outcome<DescribeTaskDefinitionResult, Client::AWSError<ECSErrors>> DescribeTaskDefinitionOutcome;
        typedef Utils::Outcome<DescribeTasksResult, Client::AWSError<ECSErrors>> DescribeTasksOutcome;
        typedef Utils::Outcome<DiscoverPollEndpointResult, Client::AWSError<ECSErrors>> DiscoverPollEndpointOutcome;
        typedef Utils::Outcome<ListClustersResult, Client::AWSError<ECSErrors>> ListClustersOutcome;
        typedef Utils::Outcome<ListContainerInstancesResult, Client::AWSError<ECSErrors>> ListContainerInstancesOutcome;
        typedef Utils::Outcome<ListServicesResult, Client::AWSError<ECSErrors>> ListServicesOutcome;
        typedef Utils::Outcome<ListTaskDefinitionFamiliesResult, Client::AWSError<ECSErrors>> ListTaskDefinitionFamiliesOutcome;
        typedef Utils::Outcome<ListTaskDefinitionsResult, Client::AWSError<ECSErrors>> ListTaskDefinitionsOutcome;
        typedef Utils::Outcome<ListTasksResult, Client::AWSError<ECSErrors>> ListTasksOutcome;
        typedef Utils::Outcome<RegisterContainerInstanceResult, Client::AWSError<ECSErrors>> RegisterContainerInstanceOutcome;
        typedef Utils::Outcome<RegisterTaskDefinitionResult, Client::AWSError<ECSErrors>> RegisterTaskDefinitionOutcome;
        typedef Utils::Outcome<RunTaskResult, Client::AWSError<ECSErrors>> RunTaskOutcome;
        typedef Utils::Outcome<StartTaskResult, Client::AWSError<ECSErrors>> StartTaskOutcome;
        typedef Utils::Outcome<StopTaskResult, Client::AWSError<ECSErrors>> StopTaskOutcome;
        typedef Utils::Outcome<SubmitContainerStateChangeResult, Client::AWSError<ECSErrors>> SubmitContainerStateChangeOutcome;
        typedef Utils::Outcome<SubmitTaskStateChangeResult, Client::AWSError<ECSErrors>> SubmitTaskStateChangeOutcome;
        typedef Utils::Outcome<UpdateContainerAgentResult, Client::AWSError<ECSErrors>> UpdateContainerAgentOutcome;
        typedef Utils::Outcome<UpdateServiceResult, Client::AWSError<ECSErrors>> UpdateServiceOutcome;

        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
        typedef std::future<DeregisterContainerInstanceOutcome> DeregisterContainerInstanceOutcomeCallable;
        typedef std::future<DeregisterTaskDefinitionOutcome> DeregisterTaskDefinitionOutcomeCallable;
        typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
        typedef std::future<DescribeContainerInstancesOutcome> DescribeContainerInstancesOutcomeCallable;
        typedef std::future<DescribeServicesOutcome> DescribeServicesOutcomeCallable;
        typedef std::future<DescribeTaskDefinitionOutcome> DescribeTaskDefinitionOutcomeCallable;
        typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
        typedef std::future<DiscoverPollEndpointOutcome> DiscoverPollEndpointOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListContainerInstancesOutcome> ListContainerInstancesOutcomeCallable;
        typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
        typedef std::future<ListTaskDefinitionFamiliesOutcome> ListTaskDefinitionFamiliesOutcomeCallable;
        typedef std::future<ListTaskDefinitionsOutcome> ListTaskDefinitionsOutcomeCallable;
        typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
        typedef std::future<RegisterContainerInstanceOutcome> RegisterContainerInstanceOutcomeCallable;
        typedef std::future<RegisterTaskDefinitionOutcome> RegisterTaskDefinitionOutcomeCallable;
        typedef std::future<RunTaskOutcome> RunTaskOutcomeCallable;
        typedef std::future<StartTaskOutcome> StartTaskOutcomeCallable;
        typedef std::future<StopTaskOutcome> StopTaskOutcomeCallable;
        typedef std::future<SubmitContainerStateChangeOutcome> SubmitContainerStateChangeOutcomeCallable;
        typedef std::future<SubmitTaskStateChangeOutcome> SubmitTaskStateChangeOutcomeCallable;
        typedef std::future<UpdateContainerAgentOutcome> UpdateContainerAgentOutcomeCallable;
        typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
} // namespace Model

    class ECSClient;

    typedef std::function<void(const ECSClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeregisterContainerInstanceRequest&, const Model::DeregisterContainerInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterContainerInstanceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeregisterTaskDefinitionRequest&, const Model::DeregisterTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeContainerInstancesRequest&, const Model::DescribeContainerInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContainerInstancesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeServicesRequest&, const Model::DescribeServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServicesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeTaskDefinitionRequest&, const Model::DescribeTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeTasksRequest&, const Model::DescribeTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTasksResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DiscoverPollEndpointRequest&, const Model::DiscoverPollEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DiscoverPollEndpointResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListContainerInstancesRequest&, const Model::ListContainerInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContainerInstancesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTaskDefinitionFamiliesRequest&, const Model::ListTaskDefinitionFamiliesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskDefinitionFamiliesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTaskDefinitionsRequest&, const Model::ListTaskDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskDefinitionsResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTasksRequest&, const Model::ListTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTasksResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RegisterContainerInstanceRequest&, const Model::RegisterContainerInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterContainerInstanceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RegisterTaskDefinitionRequest&, const Model::RegisterTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RunTaskRequest&, const Model::RunTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::StartTaskRequest&, const Model::StartTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::StopTaskRequest&, const Model::StopTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::SubmitContainerStateChangeRequest&, const Model::SubmitContainerStateChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitContainerStateChangeResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::SubmitTaskStateChangeRequest&, const Model::SubmitTaskStateChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitTaskStateChangeResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateContainerAgentRequest&, const Model::UpdateContainerAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContainerAgentResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateServiceRequest&, const Model::UpdateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceResponseReceivedHandler;

  /*
    <p></p> <p>Amazon EC2 Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it easy to run, stop, and manage Docker containers on a cluster of Amazon EC2 instances. Amazon ECS lets you launch and stop container-enabled applications with simple API calls, allows you to get the state of your cluster from a centralized service, and gives you access to many familiar Amazon EC2 features like security groups, Amazon EBS volumes, and IAM roles.</p> <p>You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs, isolation policies, and availability requirements. Amazon EC2 Container Service eliminates the need for you to operate your own cluster management and configuration management systems or worry about scaling your management infrastructure.</p>
  */
  class AWS_ECS_API ECSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

            /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECSClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECSClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECSClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        ~ECSClient();
            /*
            <p>Creates a new Amazon ECS cluster. By default, your account will receive a <code>default</code> cluster when you launch your first container instance. However, you can create your own cluster with a unique name with the <code>CreateCluster</code> action.</p>
        */
        Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /*
            <p>Creates a new Amazon ECS cluster. By default, your account will receive a <code>default</code> cluster when you launch your first container instance. However, you can create your own cluster with a unique name with the <code>CreateCluster</code> action.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /*
            <p>Creates a new Amazon ECS cluster. By default, your account will receive a <code>default</code> cluster when you launch your first container instance. However, you can create your own cluster with a unique name with the <code>CreateCluster</code> action.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Runs and maintains a desired number of tasks from a specified task definition. If the number of tasks running in a service drops below <code>desiredCount</code>, Amazon ECS will spawn another instantiation of the task in the specified cluster.</p>
        */
        Model::CreateServiceOutcome CreateService(const Model::CreateServiceRequest& request) const;

        /*
            <p>Runs and maintains a desired number of tasks from a specified task definition. If the number of tasks running in a service drops below <code>desiredCount</code>, Amazon ECS will spawn another instantiation of the task in the specified cluster.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request) const;

        /*
            <p>Runs and maintains a desired number of tasks from a specified task definition. If the number of tasks running in a service drops below <code>desiredCount</code>, Amazon ECS will spawn another instantiation of the task in the specified cluster.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified cluster. You must deregister all container instances from this cluster before you may delete it. You can list the container instances in a cluster with <a>ListContainerInstances</a> and deregister them with <a>DeregisterContainerInstance</a>.</p>
        */
        Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /*
            <p>Deletes the specified cluster. You must deregister all container instances from this cluster before you may delete it. You can list the container instances in a cluster with <a>ListContainerInstances</a> and deregister them with <a>DeregisterContainerInstance</a>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /*
            <p>Deletes the specified cluster. You must deregister all container instances from this cluster before you may delete it. You can list the container instances in a cluster with <a>ListContainerInstances</a> and deregister them with <a>DeregisterContainerInstance</a>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes a specified service within a cluster.</p>
        */
        Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;

        /*
            <p>Deletes a specified service within a cluster.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const Model::DeleteServiceRequest& request) const;

        /*
            <p>Deletes a specified service within a cluster.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deregisters an Amazon ECS container instance from the specified cluster. This instance will no longer be available to run tasks.</p> <p>If you intend to use the container instance for some other purpose after deregistration, you should stop all of the tasks running on the container instance before deregistration to avoid any orphaned tasks from consuming resources.</p> <p>Deregistering a container instance removes the instance from a cluster, but it does not terminate the EC2 instance; if you are finished using the instance, be sure to terminate it in the Amazon EC2 console to stop billing.</p> <note><p>When you terminate a container instance, it is automatically deregistered from your cluster.</p></note>
        */
        Model::DeregisterContainerInstanceOutcome DeregisterContainerInstance(const Model::DeregisterContainerInstanceRequest& request) const;

        /*
            <p>Deregisters an Amazon ECS container instance from the specified cluster. This instance will no longer be available to run tasks.</p> <p>If you intend to use the container instance for some other purpose after deregistration, you should stop all of the tasks running on the container instance before deregistration to avoid any orphaned tasks from consuming resources.</p> <p>Deregistering a container instance removes the instance from a cluster, but it does not terminate the EC2 instance; if you are finished using the instance, be sure to terminate it in the Amazon EC2 console to stop billing.</p> <note><p>When you terminate a container instance, it is automatically deregistered from your cluster.</p></note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeregisterContainerInstanceOutcomeCallable DeregisterContainerInstanceCallable(const Model::DeregisterContainerInstanceRequest& request) const;

        /*
            <p>Deregisters an Amazon ECS container instance from the specified cluster. This instance will no longer be available to run tasks.</p> <p>If you intend to use the container instance for some other purpose after deregistration, you should stop all of the tasks running on the container instance before deregistration to avoid any orphaned tasks from consuming resources.</p> <p>Deregistering a container instance removes the instance from a cluster, but it does not terminate the EC2 instance; if you are finished using the instance, be sure to terminate it in the Amazon EC2 console to stop billing.</p> <note><p>When you terminate a container instance, it is automatically deregistered from your cluster.</p></note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeregisterContainerInstanceAsync(const Model::DeregisterContainerInstanceRequest& request, const DeregisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deregisters the specified task definition by family and revision. Upon deregistration, the task definition is marked as <code>INACTIVE</code>. Existing tasks and services that reference an <code>INACTIVE</code> task definition continue to run without disruption. Existing services that reference an <code>INACTIVE</code> task definition can still scale up or down by modifying the service's desired count.</p> <p>You cannot use an <code>INACTIVE</code> task definition to run new tasks or create new services, and you cannot update an existing service to reference an <code>INACTIVE</code> task definition (although there may be up to a 10 minute window following deregistration where these restrictions have not yet taken effect).</p>
        */
        Model::DeregisterTaskDefinitionOutcome DeregisterTaskDefinition(const Model::DeregisterTaskDefinitionRequest& request) const;

        /*
            <p>Deregisters the specified task definition by family and revision. Upon deregistration, the task definition is marked as <code>INACTIVE</code>. Existing tasks and services that reference an <code>INACTIVE</code> task definition continue to run without disruption. Existing services that reference an <code>INACTIVE</code> task definition can still scale up or down by modifying the service's desired count.</p> <p>You cannot use an <code>INACTIVE</code> task definition to run new tasks or create new services, and you cannot update an existing service to reference an <code>INACTIVE</code> task definition (although there may be up to a 10 minute window following deregistration where these restrictions have not yet taken effect).</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeregisterTaskDefinitionOutcomeCallable DeregisterTaskDefinitionCallable(const Model::DeregisterTaskDefinitionRequest& request) const;

        /*
            <p>Deregisters the specified task definition by family and revision. Upon deregistration, the task definition is marked as <code>INACTIVE</code>. Existing tasks and services that reference an <code>INACTIVE</code> task definition continue to run without disruption. Existing services that reference an <code>INACTIVE</code> task definition can still scale up or down by modifying the service's desired count.</p> <p>You cannot use an <code>INACTIVE</code> task definition to run new tasks or create new services, and you cannot update an existing service to reference an <code>INACTIVE</code> task definition (although there may be up to a 10 minute window following deregistration where these restrictions have not yet taken effect).</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeregisterTaskDefinitionAsync(const Model::DeregisterTaskDefinitionRequest& request, const DeregisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes one or more of your clusters.</p>
        */
        Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;

        /*
            <p>Describes one or more of your clusters.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

        /*
            <p>Describes one or more of your clusters.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes Amazon EC2 Container Service container instances. Returns metadata about registered and remaining resources on each container instance requested.</p>
        */
        Model::DescribeContainerInstancesOutcome DescribeContainerInstances(const Model::DescribeContainerInstancesRequest& request) const;

        /*
            <p>Describes Amazon EC2 Container Service container instances. Returns metadata about registered and remaining resources on each container instance requested.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeContainerInstancesOutcomeCallable DescribeContainerInstancesCallable(const Model::DescribeContainerInstancesRequest& request) const;

        /*
            <p>Describes Amazon EC2 Container Service container instances. Returns metadata about registered and remaining resources on each container instance requested.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeContainerInstancesAsync(const Model::DescribeContainerInstancesRequest& request, const DescribeContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the specified services running in your cluster.</p>
        */
        Model::DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest& request) const;

        /*
            <p>Describes the specified services running in your cluster.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeServicesOutcomeCallable DescribeServicesCallable(const Model::DescribeServicesRequest& request) const;

        /*
            <p>Describes the specified services running in your cluster.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeServicesAsync(const Model::DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes a task definition. You can specify a <code>family</code> and <code>revision</code> to find information on a specific task definition, or you can simply specify the family to find the latest <code>ACTIVE</code> revision in that family.</p> <note> <p>You can only describe <code>INACTIVE</code> task definitions while an active task or service references them.</p> </note>
        */
        Model::DescribeTaskDefinitionOutcome DescribeTaskDefinition(const Model::DescribeTaskDefinitionRequest& request) const;

        /*
            <p>Describes a task definition. You can specify a <code>family</code> and <code>revision</code> to find information on a specific task definition, or you can simply specify the family to find the latest <code>ACTIVE</code> revision in that family.</p> <note> <p>You can only describe <code>INACTIVE</code> task definitions while an active task or service references them.</p> </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeTaskDefinitionOutcomeCallable DescribeTaskDefinitionCallable(const Model::DescribeTaskDefinitionRequest& request) const;

        /*
            <p>Describes a task definition. You can specify a <code>family</code> and <code>revision</code> to find information on a specific task definition, or you can simply specify the family to find the latest <code>ACTIVE</code> revision in that family.</p> <note> <p>You can only describe <code>INACTIVE</code> task definitions while an active task or service references them.</p> </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeTaskDefinitionAsync(const Model::DescribeTaskDefinitionRequest& request, const DescribeTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes a specified task or tasks.</p>
        */
        Model::DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest& request) const;

        /*
            <p>Describes a specified task or tasks.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request) const;

        /*
            <p>Describes a specified task or tasks.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Returns an endpoint for the Amazon EC2 Container Service agent to poll for updates.</p>
        */
        Model::DiscoverPollEndpointOutcome DiscoverPollEndpoint(const Model::DiscoverPollEndpointRequest& request) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Returns an endpoint for the Amazon EC2 Container Service agent to poll for updates.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DiscoverPollEndpointOutcomeCallable DiscoverPollEndpointCallable(const Model::DiscoverPollEndpointRequest& request) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Returns an endpoint for the Amazon EC2 Container Service agent to poll for updates.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DiscoverPollEndpointAsync(const Model::DiscoverPollEndpointRequest& request, const DiscoverPollEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns a list of existing clusters.</p>
        */
        Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /*
            <p>Returns a list of existing clusters.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /*
            <p>Returns a list of existing clusters.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns a list of container instances in a specified cluster.</p>
        */
        Model::ListContainerInstancesOutcome ListContainerInstances(const Model::ListContainerInstancesRequest& request) const;

        /*
            <p>Returns a list of container instances in a specified cluster.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListContainerInstancesOutcomeCallable ListContainerInstancesCallable(const Model::ListContainerInstancesRequest& request) const;

        /*
            <p>Returns a list of container instances in a specified cluster.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListContainerInstancesAsync(const Model::ListContainerInstancesRequest& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the services that are running in a specified cluster.</p>
        */
        Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /*
            <p>Lists the services that are running in a specified cluster.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListServicesOutcomeCallable ListServicesCallable(const Model::ListServicesRequest& request) const;

        /*
            <p>Lists the services that are running in a specified cluster.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListServicesAsync(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns a list of task definition families that are registered to your account (which may include task definition families that no longer have any <code>ACTIVE</code> task definitions). You can filter the results with the <code>familyPrefix</code> parameter.</p>
        */
        Model::ListTaskDefinitionFamiliesOutcome ListTaskDefinitionFamilies(const Model::ListTaskDefinitionFamiliesRequest& request) const;

        /*
            <p>Returns a list of task definition families that are registered to your account (which may include task definition families that no longer have any <code>ACTIVE</code> task definitions). You can filter the results with the <code>familyPrefix</code> parameter.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListTaskDefinitionFamiliesOutcomeCallable ListTaskDefinitionFamiliesCallable(const Model::ListTaskDefinitionFamiliesRequest& request) const;

        /*
            <p>Returns a list of task definition families that are registered to your account (which may include task definition families that no longer have any <code>ACTIVE</code> task definitions). You can filter the results with the <code>familyPrefix</code> parameter.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListTaskDefinitionFamiliesAsync(const Model::ListTaskDefinitionFamiliesRequest& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns a list of task definitions that are registered to your account. You can filter the results by family name with the <code>familyPrefix</code> parameter or by status with the <code>status</code> parameter.</p>
        */
        Model::ListTaskDefinitionsOutcome ListTaskDefinitions(const Model::ListTaskDefinitionsRequest& request) const;

        /*
            <p>Returns a list of task definitions that are registered to your account. You can filter the results by family name with the <code>familyPrefix</code> parameter or by status with the <code>status</code> parameter.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListTaskDefinitionsOutcomeCallable ListTaskDefinitionsCallable(const Model::ListTaskDefinitionsRequest& request) const;

        /*
            <p>Returns a list of task definitions that are registered to your account. You can filter the results by family name with the <code>familyPrefix</code> parameter or by status with the <code>status</code> parameter.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListTaskDefinitionsAsync(const Model::ListTaskDefinitionsRequest& request, const ListTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns a list of tasks for a specified cluster. You can filter the results by family name, by a particular container instance, or by the desired status of the task with the <code>family</code>, <code>containerInstance</code>, and <code>desiredStatus</code> parameters.</p>
        */
        Model::ListTasksOutcome ListTasks(const Model::ListTasksRequest& request) const;

        /*
            <p>Returns a list of tasks for a specified cluster. You can filter the results by family name, by a particular container instance, or by the desired status of the task with the <code>family</code>, <code>containerInstance</code>, and <code>desiredStatus</code> parameters.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListTasksOutcomeCallable ListTasksCallable(const Model::ListTasksRequest& request) const;

        /*
            <p>Returns a list of tasks for a specified cluster. You can filter the results by family name, by a particular container instance, or by the desired status of the task with the <code>family</code>, <code>containerInstance</code>, and <code>desiredStatus</code> parameters.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListTasksAsync(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Registers an Amazon EC2 instance into the specified cluster. This instance will become available to place containers on.</p>
        */
        Model::RegisterContainerInstanceOutcome RegisterContainerInstance(const Model::RegisterContainerInstanceRequest& request) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Registers an Amazon EC2 instance into the specified cluster. This instance will become available to place containers on.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RegisterContainerInstanceOutcomeCallable RegisterContainerInstanceCallable(const Model::RegisterContainerInstanceRequest& request) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Registers an Amazon EC2 instance into the specified cluster. This instance will become available to place containers on.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RegisterContainerInstanceAsync(const Model::RegisterContainerInstanceRequest& request, const RegisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Registers a new task definition from the supplied <code>family</code> and <code>containerDefinitions</code>. Optionally, you can add data volumes to your containers with the <code>volumes</code> parameter. For more information on task definition parameters and defaults, see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
        */
        Model::RegisterTaskDefinitionOutcome RegisterTaskDefinition(const Model::RegisterTaskDefinitionRequest& request) const;

        /*
            <p>Registers a new task definition from the supplied <code>family</code> and <code>containerDefinitions</code>. Optionally, you can add data volumes to your containers with the <code>volumes</code> parameter. For more information on task definition parameters and defaults, see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RegisterTaskDefinitionOutcomeCallable RegisterTaskDefinitionCallable(const Model::RegisterTaskDefinitionRequest& request) const;

        /*
            <p>Registers a new task definition from the supplied <code>family</code> and <code>containerDefinitions</code>. Optionally, you can add data volumes to your containers with the <code>volumes</code> parameter. For more information on task definition parameters and defaults, see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RegisterTaskDefinitionAsync(const Model::RegisterTaskDefinitionRequest& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Start a task using random placement and the default Amazon ECS scheduler. If you want to use your own scheduler or place a task on a specific container instance, use <code>StartTask</code> instead.</p> <important> <p>The <code>count</code> parameter is limited to 10 tasks per call.</p> </important>
        */
        Model::RunTaskOutcome RunTask(const Model::RunTaskRequest& request) const;

        /*
            <p>Start a task using random placement and the default Amazon ECS scheduler. If you want to use your own scheduler or place a task on a specific container instance, use <code>StartTask</code> instead.</p> <important> <p>The <code>count</code> parameter is limited to 10 tasks per call.</p> </important>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RunTaskOutcomeCallable RunTaskCallable(const Model::RunTaskRequest& request) const;

        /*
            <p>Start a task using random placement and the default Amazon ECS scheduler. If you want to use your own scheduler or place a task on a specific container instance, use <code>StartTask</code> instead.</p> <important> <p>The <code>count</code> parameter is limited to 10 tasks per call.</p> </important>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RunTaskAsync(const Model::RunTaskRequest& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Starts a new task from the specified task definition on the specified container instance or instances. If you want to use the default Amazon ECS scheduler to place your task, use <code>RunTask</code> instead.</p> <important> <p>The list of container instances to start tasks on is limited to 10.</p> </important>
        */
        Model::StartTaskOutcome StartTask(const Model::StartTaskRequest& request) const;

        /*
            <p>Starts a new task from the specified task definition on the specified container instance or instances. If you want to use the default Amazon ECS scheduler to place your task, use <code>RunTask</code> instead.</p> <important> <p>The list of container instances to start tasks on is limited to 10.</p> </important>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::StartTaskOutcomeCallable StartTaskCallable(const Model::StartTaskRequest& request) const;

        /*
            <p>Starts a new task from the specified task definition on the specified container instance or instances. If you want to use the default Amazon ECS scheduler to place your task, use <code>RunTask</code> instead.</p> <important> <p>The list of container instances to start tasks on is limited to 10.</p> </important>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void StartTaskAsync(const Model::StartTaskRequest& request, const StartTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Stops a running task.</p>
        */
        Model::StopTaskOutcome StopTask(const Model::StopTaskRequest& request) const;

        /*
            <p>Stops a running task.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::StopTaskOutcomeCallable StopTaskCallable(const Model::StopTaskRequest& request) const;

        /*
            <p>Stops a running task.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void StopTaskAsync(const Model::StopTaskRequest& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a container changed states.</p>
        */
        Model::SubmitContainerStateChangeOutcome SubmitContainerStateChange(const Model::SubmitContainerStateChangeRequest& request) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a container changed states.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SubmitContainerStateChangeOutcomeCallable SubmitContainerStateChangeCallable(const Model::SubmitContainerStateChangeRequest& request) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a container changed states.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SubmitContainerStateChangeAsync(const Model::SubmitContainerStateChangeRequest& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a task changed states.</p>
        */
        Model::SubmitTaskStateChangeOutcome SubmitTaskStateChange(const Model::SubmitTaskStateChangeRequest& request) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a task changed states.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SubmitTaskStateChangeOutcomeCallable SubmitTaskStateChangeCallable(const Model::SubmitTaskStateChangeRequest& request) const;

        /*
            <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a task changed states.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SubmitTaskStateChangeAsync(const Model::SubmitTaskStateChangeRequest& request, const SubmitTaskStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Updates the Amazon ECS container agent on a specified container instance. Updating the Amazon ECS container agent does not interrupt running tasks or services on the container instance. The process for updating the agent differs depending on whether your container instance was launched with the Amazon ECS-optimized AMI or another operating system.</p> <p><code>UpdateContainerAgent</code> requires the Amazon ECS-optimized AMI or Amazon Linux with the <code>ecs-init</code> service installed and running. For help updating the Amazon ECS container agent on other operating systems, see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html#manually_update_agent">Manually Updating the Amazon ECS Container Agent</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
        */
        Model::UpdateContainerAgentOutcome UpdateContainerAgent(const Model::UpdateContainerAgentRequest& request) const;

        /*
            <p>Updates the Amazon ECS container agent on a specified container instance. Updating the Amazon ECS container agent does not interrupt running tasks or services on the container instance. The process for updating the agent differs depending on whether your container instance was launched with the Amazon ECS-optimized AMI or another operating system.</p> <p><code>UpdateContainerAgent</code> requires the Amazon ECS-optimized AMI or Amazon Linux with the <code>ecs-init</code> service installed and running. For help updating the Amazon ECS container agent on other operating systems, see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html#manually_update_agent">Manually Updating the Amazon ECS Container Agent</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateContainerAgentOutcomeCallable UpdateContainerAgentCallable(const Model::UpdateContainerAgentRequest& request) const;

        /*
            <p>Updates the Amazon ECS container agent on a specified container instance. Updating the Amazon ECS container agent does not interrupt running tasks or services on the container instance. The process for updating the agent differs depending on whether your container instance was launched with the Amazon ECS-optimized AMI or another operating system.</p> <p><code>UpdateContainerAgent</code> requires the Amazon ECS-optimized AMI or Amazon Linux with the <code>ecs-init</code> service installed and running. For help updating the Amazon ECS container agent on other operating systems, see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html#manually_update_agent">Manually Updating the Amazon ECS Container Agent</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateContainerAgentAsync(const Model::UpdateContainerAgentRequest& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Modify the desired count or task definition used in a service.</p> <p>You can add to or subtract from the number of instantiations of a task definition in a service by specifying the cluster that the service is running in and a new <code>desiredCount</code> parameter.</p> <p>You can use <code>UpdateService</code> to modify your task definition and deploy a new version of your service, one task at a time. If you modify the task definition with <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the task definition and then stops an old task after the new version is running. Because <code>UpdateService</code> starts a new version of the task before stopping an old version, your cluster must have capacity to support one more instantiation of the task when <code>UpdateService</code> is run. If your cluster cannot support another instantiation of the task used in your service, you can reduce the desired count of your service by one before modifying the task definition.</p>
        */
        Model::UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest& request) const;

        /*
            <p>Modify the desired count or task definition used in a service.</p> <p>You can add to or subtract from the number of instantiations of a task definition in a service by specifying the cluster that the service is running in and a new <code>desiredCount</code> parameter.</p> <p>You can use <code>UpdateService</code> to modify your task definition and deploy a new version of your service, one task at a time. If you modify the task definition with <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the task definition and then stops an old task after the new version is running. Because <code>UpdateService</code> starts a new version of the task before stopping an old version, your cluster must have capacity to support one more instantiation of the task when <code>UpdateService</code> is run. If your cluster cannot support another instantiation of the task used in your service, you can reduce the desired count of your service by one before modifying the task definition.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request) const;

        /*
            <p>Modify the desired count or task definition used in a service.</p> <p>You can add to or subtract from the number of instantiations of a task definition in a service by specifying the cluster that the service is running in and a new <code>desiredCount</code> parameter.</p> <p>You can use <code>UpdateService</code> to modify your task definition and deploy a new version of your service, one task at a time. If you modify the task definition with <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the task definition and then stops an old task after the new version is running. Because <code>UpdateService</code> starts a new version of the task before stopping an old version, your cluster must have capacity to support one more instantiation of the task when <code>UpdateService</code> is run. If your cluster cannot support another instantiation of the task used in your service, you can reduce the desired count of your service by one before modifying the task definition.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateServiceAsyncHelper(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceAsyncHelper(const Model::DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterContainerInstanceAsyncHelper(const Model::DeregisterContainerInstanceRequest& request, const DeregisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterTaskDefinitionAsyncHelper(const Model::DeregisterTaskDefinitionRequest& request, const DeregisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClustersAsyncHelper(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContainerInstancesAsyncHelper(const Model::DescribeContainerInstancesRequest& request, const DescribeContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServicesAsyncHelper(const Model::DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTaskDefinitionAsyncHelper(const Model::DescribeTaskDefinitionRequest& request, const DescribeTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTasksAsyncHelper(const Model::DescribeTasksRequest& request, const DescribeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DiscoverPollEndpointAsyncHelper(const Model::DiscoverPollEndpointRequest& request, const DiscoverPollEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContainerInstancesAsyncHelper(const Model::ListContainerInstancesRequest& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServicesAsyncHelper(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTaskDefinitionFamiliesAsyncHelper(const Model::ListTaskDefinitionFamiliesRequest& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTaskDefinitionsAsyncHelper(const Model::ListTaskDefinitionsRequest& request, const ListTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTasksAsyncHelper(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterContainerInstanceAsyncHelper(const Model::RegisterContainerInstanceRequest& request, const RegisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterTaskDefinitionAsyncHelper(const Model::RegisterTaskDefinitionRequest& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RunTaskAsyncHelper(const Model::RunTaskRequest& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTaskAsyncHelper(const Model::StartTaskRequest& request, const StartTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTaskAsyncHelper(const Model::StopTaskRequest& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubmitContainerStateChangeAsyncHelper(const Model::SubmitContainerStateChangeRequest& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubmitTaskStateChangeAsyncHelper(const Model::SubmitTaskStateChangeRequest& request, const SubmitTaskStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContainerAgentAsyncHelper(const Model::UpdateContainerAgentRequest& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceAsyncHelper(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace ECS
} // namespace Aws
