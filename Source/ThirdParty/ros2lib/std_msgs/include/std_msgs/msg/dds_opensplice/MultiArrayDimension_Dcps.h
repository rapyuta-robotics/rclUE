#ifndef _H_B5B9EE885826EFD411BDE1BE7D3B9714_MultiArrayDimension_DCPS_H_
#define _H_B5B9EE885826EFD411BDE1BE7D3B9714_MultiArrayDimension_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MultiArrayDimension_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MultiArrayDimension_TypeSupportInterface;

            typedef MultiArrayDimension_TypeSupportInterface * MultiArrayDimension_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MultiArrayDimension_TypeSupportInterface> MultiArrayDimension_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MultiArrayDimension_TypeSupportInterface> MultiArrayDimension_TypeSupportInterface_out;


            class MultiArrayDimension_DataWriter;

            typedef MultiArrayDimension_DataWriter * MultiArrayDimension_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MultiArrayDimension_DataWriter> MultiArrayDimension_DataWriter_var;
            typedef DDS_DCPSInterface_out < MultiArrayDimension_DataWriter> MultiArrayDimension_DataWriter_out;


            class MultiArrayDimension_DataReader;

            typedef MultiArrayDimension_DataReader * MultiArrayDimension_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MultiArrayDimension_DataReader> MultiArrayDimension_DataReader_var;
            typedef DDS_DCPSInterface_out < MultiArrayDimension_DataReader> MultiArrayDimension_DataReader_out;


            class MultiArrayDimension_DataReaderView;

            typedef MultiArrayDimension_DataReaderView * MultiArrayDimension_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MultiArrayDimension_DataReaderView> MultiArrayDimension_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MultiArrayDimension_DataReaderView> MultiArrayDimension_DataReaderView_out;

            struct MultiArrayDimension_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MultiArrayDimension_, struct MultiArrayDimension_Seq_uniq_> MultiArrayDimension_Seq;
            typedef DDS_DCPSSequence_var < MultiArrayDimension_Seq> MultiArrayDimension_Seq_var;
            typedef DDS_DCPSSequence_out < MultiArrayDimension_Seq> MultiArrayDimension_Seq_out;

            class  MultiArrayDimension_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MultiArrayDimension_TypeSupportInterface_ptr _ptr_type;
                typedef MultiArrayDimension_TypeSupportInterface_var _var_type;

                static MultiArrayDimension_TypeSupportInterface_ptr _duplicate (MultiArrayDimension_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiArrayDimension_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MultiArrayDimension_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiArrayDimension_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiArrayDimension_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MultiArrayDimension_TypeSupportInterface () {};
                ~MultiArrayDimension_TypeSupportInterface () {};
            private:
                MultiArrayDimension_TypeSupportInterface (const MultiArrayDimension_TypeSupportInterface &);
                MultiArrayDimension_TypeSupportInterface & operator = (const MultiArrayDimension_TypeSupportInterface &);
            };

            class  MultiArrayDimension_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MultiArrayDimension_DataWriter_ptr _ptr_type;
                typedef MultiArrayDimension_DataWriter_var _var_type;

                static MultiArrayDimension_DataWriter_ptr _duplicate (MultiArrayDimension_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiArrayDimension_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MultiArrayDimension_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiArrayDimension_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiArrayDimension_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MultiArrayDimension_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MultiArrayDimension_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MultiArrayDimension_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MultiArrayDimension_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MultiArrayDimension_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MultiArrayDimension_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MultiArrayDimension_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MultiArrayDimension_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MultiArrayDimension_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MultiArrayDimension_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MultiArrayDimension_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiArrayDimension_& instance_data) = 0;

            protected:
                MultiArrayDimension_DataWriter () {};
                ~MultiArrayDimension_DataWriter () {};
            private:
                MultiArrayDimension_DataWriter (const MultiArrayDimension_DataWriter &);
                MultiArrayDimension_DataWriter & operator = (const MultiArrayDimension_DataWriter &);
            };

            class  MultiArrayDimension_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MultiArrayDimension_DataReader_ptr _ptr_type;
                typedef MultiArrayDimension_DataReader_var _var_type;

                static MultiArrayDimension_DataReader_ptr _duplicate (MultiArrayDimension_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiArrayDimension_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MultiArrayDimension_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiArrayDimension_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiArrayDimension_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiArrayDimension_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiArrayDimension_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiArrayDimension_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiArrayDimension_& instance) = 0;

            protected:
                MultiArrayDimension_DataReader () {};
                ~MultiArrayDimension_DataReader () {};
            private:
                MultiArrayDimension_DataReader (const MultiArrayDimension_DataReader &);
                MultiArrayDimension_DataReader & operator = (const MultiArrayDimension_DataReader &);
            };

            class  MultiArrayDimension_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MultiArrayDimension_DataReaderView_ptr _ptr_type;
                typedef MultiArrayDimension_DataReaderView_var _var_type;

                static MultiArrayDimension_DataReaderView_ptr _duplicate (MultiArrayDimension_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiArrayDimension_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MultiArrayDimension_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiArrayDimension_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiArrayDimension_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiArrayDimension_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiArrayDimension_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiArrayDimension_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiArrayDimension_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiArrayDimension_& instance) = 0;

            protected:
                MultiArrayDimension_DataReaderView () {};
                ~MultiArrayDimension_DataReaderView () {};
            private:
                MultiArrayDimension_DataReaderView (const MultiArrayDimension_DataReaderView &);
                MultiArrayDimension_DataReaderView & operator = (const MultiArrayDimension_DataReaderView &);
            };
        }

    }

}

#endif
