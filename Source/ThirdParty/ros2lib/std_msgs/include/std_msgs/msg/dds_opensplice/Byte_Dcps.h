#ifndef _H_8F73DFFA6353B5D09A48B81760868112_Byte_DCPS_H_
#define _H_8F73DFFA6353B5D09A48B81760868112_Byte_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Byte_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Byte_TypeSupportInterface;

            typedef Byte_TypeSupportInterface * Byte_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Byte_TypeSupportInterface> Byte_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Byte_TypeSupportInterface> Byte_TypeSupportInterface_out;


            class Byte_DataWriter;

            typedef Byte_DataWriter * Byte_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Byte_DataWriter> Byte_DataWriter_var;
            typedef DDS_DCPSInterface_out < Byte_DataWriter> Byte_DataWriter_out;


            class Byte_DataReader;

            typedef Byte_DataReader * Byte_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Byte_DataReader> Byte_DataReader_var;
            typedef DDS_DCPSInterface_out < Byte_DataReader> Byte_DataReader_out;


            class Byte_DataReaderView;

            typedef Byte_DataReaderView * Byte_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Byte_DataReaderView> Byte_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Byte_DataReaderView> Byte_DataReaderView_out;

            struct Byte_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Byte_, struct Byte_Seq_uniq_> Byte_Seq;
            typedef DDS_DCPSSequence_var < Byte_Seq> Byte_Seq_var;
            typedef DDS_DCPSSequence_out < Byte_Seq> Byte_Seq_out;

            class  Byte_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Byte_TypeSupportInterface_ptr _ptr_type;
                typedef Byte_TypeSupportInterface_var _var_type;

                static Byte_TypeSupportInterface_ptr _duplicate (Byte_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Byte_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Byte_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Byte_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Byte_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Byte_TypeSupportInterface () {};
                ~Byte_TypeSupportInterface () {};
            private:
                Byte_TypeSupportInterface (const Byte_TypeSupportInterface &);
                Byte_TypeSupportInterface & operator = (const Byte_TypeSupportInterface &);
            };

            class  Byte_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Byte_DataWriter_ptr _ptr_type;
                typedef Byte_DataWriter_var _var_type;

                static Byte_DataWriter_ptr _duplicate (Byte_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Byte_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Byte_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Byte_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Byte_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Byte_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Byte_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Byte_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Byte_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Byte_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Byte_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Byte_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Byte_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Byte_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Byte_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Byte_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Byte_& instance_data) = 0;

            protected:
                Byte_DataWriter () {};
                ~Byte_DataWriter () {};
            private:
                Byte_DataWriter (const Byte_DataWriter &);
                Byte_DataWriter & operator = (const Byte_DataWriter &);
            };

            class  Byte_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Byte_DataReader_ptr _ptr_type;
                typedef Byte_DataReader_var _var_type;

                static Byte_DataReader_ptr _duplicate (Byte_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Byte_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Byte_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Byte_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Byte_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Byte_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Byte_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Byte_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Byte_& instance) = 0;

            protected:
                Byte_DataReader () {};
                ~Byte_DataReader () {};
            private:
                Byte_DataReader (const Byte_DataReader &);
                Byte_DataReader & operator = (const Byte_DataReader &);
            };

            class  Byte_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Byte_DataReaderView_ptr _ptr_type;
                typedef Byte_DataReaderView_var _var_type;

                static Byte_DataReaderView_ptr _duplicate (Byte_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Byte_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Byte_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Byte_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Byte_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Byte_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Byte_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Byte_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Byte_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Byte_& instance) = 0;

            protected:
                Byte_DataReaderView () {};
                ~Byte_DataReaderView () {};
            private:
                Byte_DataReaderView (const Byte_DataReaderView &);
                Byte_DataReaderView & operator = (const Byte_DataReaderView &);
            };
        }

    }

}

#endif
